#define FFT_GLOBALS
#include "stdio.h"
#include "soft_fft.h"

const float sin_tab_64[64]={0.000000, 0.098017, 0.195090, 0.290285, 0.382683, 0.471397, 0.555570, 0.634393, 0.707107, 0.773010, 0.831470, 0.881921, 0.923880, 0.956940, 0.980785, 0.995185,
                         1.000000, 0.995185, 0.980785, 0.956940, 0.923880, 0.881921, 0.831470, 0.773010, 0.707107, 0.634393, 0.555570, 0.471397, 0.382683, 0.290285, 0.195090, 0.098017,
                         -0.000000, -0.098017, -0.195090, -0.290285, -0.382683, -0.471397, -0.555570, -0.634393, -0.707107, -0.773010, -0.831469, -0.881921, -0.923880, -0.956940, -0.980785, -0.995185,
                         -1.000000, -0.995185, -0.980785, -0.956940, -0.923880, -0.881921, -0.831470, -0.773010, -0.707107, -0.634393, -0.555570, -0.471397, -0.382683, -0.290285, -0.195090, -0.098017};


const float sin_tab_128[128]={0.000000, 0.049068, 0.098017, 0.146730, 0.195090, 0.242980, 0.290285, 0.336890, 0.382683, 0.427555, 0.471397, 0.514103, 0.555570, 0.595699, 0.634393, 0.671559,
                        0.707107, 0.740951, 0.773010, 0.803208, 0.831470, 0.857729, 0.881921, 0.903989, 0.923880, 0.941544, 0.956940, 0.970031, 0.980785, 0.989177, 0.995185, 0.998795,
                        1.000000, 0.998795, 0.995185, 0.989177, 0.980785, 0.970031, 0.956940, 0.941544, 0.923880, 0.903989, 0.881921, 0.857729, 0.831470, 0.803207, 0.773010, 0.740951,
                        0.707107, 0.671559, 0.634393, 0.595699, 0.555570, 0.514103, 0.471397, 0.427555, 0.382683, 0.336890, 0.290285, 0.242980, 0.195090, 0.146731, 0.098017, 0.049068,
                        -0.000000, -0.049068, -0.098017, -0.146730, -0.195090, -0.242980, -0.290285, -0.336890, -0.382683, -0.427555, -0.471397, -0.514103, -0.555570, -0.595699, -0.634393, -0.671559,
                        -0.707107, -0.740951, -0.773010, -0.803208, -0.831469, -0.857729, -0.881921, -0.903989, -0.923880, -0.941544, -0.956940, -0.970031, -0.980785, -0.989177, -0.995185, -0.998795,
                        -1.000000, -0.998795, -0.995185, -0.989177, -0.980785, -0.970031, -0.956940, -0.941544, -0.923880, -0.903989, -0.881921, -0.857729, -0.831470, -0.803208, -0.773010, -0.740951,
                        -0.707107, -0.671559, -0.634393, -0.595699, -0.555570, -0.514103, -0.471397, -0.427555, -0.382683, -0.336890, -0.290285, -0.242980, -0.195090, -0.146730, -0.098017, -0.049068};


const float sin_tab_256[256]={0.000000,0.024541,0.049068,0.073565,0.098017,0.122411,0.146730,0.170962,0.195090,0.219101,0.242980,0.266713,0.290285,0.313682,0.336890,0.359895,0.382683,
        0.405241,0.427555,0.449611,0.471397,0.492898,0.514103,0.534998,0.555570,0.575808,0.595699,0.615232,0.634393,0.653173,0.671559,0.689541,0.707107,
        0.724247,0.740951,0.757209,0.773010,0.788346,0.803208,0.817585,0.831470,0.844854,0.857729,0.870087,0.881921,0.893224,0.903989,0.914210,0.923880,
        0.932993,0.941544,0.949528,0.956940,0.963776,0.970031,0.975702,0.980785,0.985278,0.989177,0.992480,0.995185,0.997290,0.998795,0.999699,1.000000,
        0.999699,0.998795,0.997290,0.995185,0.992480,0.989177,0.985278,0.980785,0.975702,0.970031,0.963776,0.956940,0.949528,0.941544,0.932993,0.923880,
        0.914210,0.903989,0.893224,0.881921,0.870087,0.857729,0.844854,0.831470,0.817585,0.803208,0.788346,0.773010,0.757209,0.740951,0.724247,0.707107,
        0.689541,0.671559,0.653173,0.634393,0.615232,0.595699,0.575808,0.555570,0.534998,0.514103,0.492898,0.471397,0.449611,0.427555,0.405241,0.382683,
        0.359895,0.336890,0.313682,0.290285,0.266713,0.242980,0.219101,0.195090,0.170962,0.146730,0.122411,0.098017,0.073565,0.049068,0.024541,0.000000,
        -0.024541,-0.049068,-0.073565,-0.098017,-0.122411,-0.146730,-0.170962,-0.195090,-0.219101,-0.242980,-0.266713,-0.290285,-0.313682,-0.336890,-0.359895,-0.382683,
        -0.405241,-0.427555,-0.449611,-0.471397,-0.492898,-0.514103,-0.534998,-0.555570,-0.575808,-0.595699,-0.615232,-0.634393,-0.653173,-0.671559,-0.689541,-0.707107,
        -0.724247,-0.740951,-0.757209,-0.773010,-0.788346,-0.803208,-0.817585,-0.831470,-0.844854,-0.857729,-0.870087,-0.881921,-0.893224,-0.903989,-0.914210,-0.923880,
        -0.932993,-0.941544,-0.949528,-0.956940,-0.963776,-0.970031,-0.975702,-0.980785,-0.985278,-0.989177,-0.992480,-0.995185,-0.997290,-0.998795,-0.999699,-1.000000,
        -0.999699,-0.998795,-0.997290,-0.995185,-0.992480,-0.989177,-0.985278,-0.980785,-0.975702,-0.970031,-0.963776,-0.956940,-0.949528,-0.941544,-0.932993,-0.923880,
        -0.914210,-0.903989,-0.893224,-0.881921,-0.870087,-0.857729,-0.844854,-0.831470,-0.817585,-0.803208,-0.788346,-0.773010,-0.757209,-0.740951,-0.724247,-0.707107,
        -0.689541,-0.671559,-0.653173,-0.634393,-0.615232,-0.595699,-0.575808,-0.555570,-0.534998,-0.514103,-0.492898,-0.471397,-0.449611,-0.427555,-0.405241,-0.382683,
        -0.359895,-0.336890,-0.313682,-0.290285,-0.266713,-0.242980,-0.219101,-0.195090,-0.170962,-0.146730,-0.122411,-0.098017,-0.073565,-0.049068,-0.024541};

const float sin_tab_512[512]={0.000000,0.012272,0.024541,0.036807,0.049068,0.061321,0.073565,0.085797,0.098017,0.110222,0.122411,0.134581,0.146730,0.158858,0.170962,0.183040,0.195090,0.207111,0.219101,0.231058,0.242980,0.254866,0.266713,0.278520,0.290285,0.302006,0.313682,0.325310,0.336890,0.348419,0.359895,0.371317,0.382683,
        0.393992,0.405241,0.416430,0.427555,0.438616,0.449611,0.460539,0.471397,0.482184,0.492898,0.503538,0.514103,0.524590,0.534998,0.545325,0.555570,0.565732,0.575808,0.585798,0.595699,0.605511,0.615232,0.624859,0.634393,0.643832,0.653173,0.662416,0.671559,0.680601,0.689541,0.698376,0.707107,
        0.715731,0.724247,0.732654,0.740951,0.749136,0.757209,0.765167,0.773010,0.780737,0.788346,0.795837,0.803208,0.810457,0.817585,0.824589,0.831470,0.838225,0.844854,0.851355,0.857729,0.863973,0.870087,0.876070,0.881921,0.887640,0.893224,0.898674,0.903989,0.909168,0.914210,0.919114,0.923880,
        0.928506,0.932993,0.937339,0.941544,0.945607,0.949528,0.953306,0.956940,0.960431,0.963776,0.966976,0.970031,0.972940,0.975702,0.978317,0.980785,0.983105,0.985278,0.987301,0.989177,0.990903,0.992480,0.993907,0.995185,0.996313,0.997290,0.998118,0.998795,0.999322,0.999699,0.999925,1.000000,
        0.999925,0.999699,0.999322,0.998795,0.998118,0.997290,0.996313,0.995185,0.993907,0.992480,0.990903,0.989177,0.987301,0.985278,0.983105,0.980785,0.978317,0.975702,0.972940,0.970031,0.966976,0.963776,0.960431,0.956940,0.953306,0.949528,0.945607,0.941544,0.937339,0.932993,0.928506,0.923880,
        0.919114,0.914210,0.909168,0.903989,0.898674,0.893224,0.887640,0.881921,0.876070,0.870087,0.863973,0.857729,0.851355,0.844854,0.838225,0.831470,0.824589,0.817585,0.810457,0.803208,0.795837,0.788346,0.780737,0.773010,0.765167,0.757209,0.749136,0.740951,0.732654,0.724247,0.715731,0.707107,
        0.698376,0.689541,0.680601,0.671559,0.662416,0.653173,0.643832,0.634393,0.624859,0.615232,0.605511,0.595699,0.585798,0.575808,0.565732,0.555570,0.545325,0.534998,0.524590,0.514103,0.503538,0.492898,0.482184,0.471397,0.460539,0.449611,0.438616,0.427555,0.416430,0.405241,0.393992,0.382683,
        0.371317,0.359895,0.348419,0.336890,0.325310,0.313682,0.302006,0.290285,0.278520,0.266713,0.254866,0.242980,0.231058,0.219101,0.207111,0.195090,0.183040,0.170962,0.158858,0.146730,0.134581,0.122411,0.110222,0.098017,0.085797,0.073565,0.061321,0.049068,0.036807,0.024541,0.012272,0.000000,
        -0.012272,-0.024541,-0.036807,-0.049068,-0.061321,-0.073565,-0.085797,-0.098017,-0.110222,-0.122411,-0.134581,-0.146730,-0.158858,-0.170962,-0.183040,-0.195090,-0.207111,-0.219101,-0.231058,-0.242980,-0.254866,-0.266713,-0.278520,-0.290285,-0.302006,-0.313682,-0.325310,-0.336890,-0.348419,-0.359895,-0.371317,-0.382683,
        -0.393992,-0.405241,-0.416430,-0.427555,-0.438616,-0.449611,-0.460539,-0.471397,-0.482184,-0.492898,-0.503538,-0.514103,-0.524590,-0.534998,-0.545325,-0.555570,-0.565732,-0.575808,-0.585798,-0.595699,-0.605511,-0.615232,-0.624859,-0.634393,-0.643832,-0.653173,-0.662416,-0.671559,-0.680601,-0.689541,-0.698376,-0.707107,
        -0.715731,-0.724247,-0.732654,-0.740951,-0.749136,-0.757209,-0.765167,-0.773010,-0.780737,-0.788346,-0.795837,-0.803208,-0.810457,-0.817585,-0.824589,-0.831470,-0.838225,-0.844854,-0.851355,-0.857729,-0.863973,-0.870087,-0.876070,-0.881921,-0.887640,-0.893224,-0.898674,-0.903989,-0.909168,-0.914210,-0.919114,-0.923880,
        -0.928506,-0.932993,-0.937339,-0.941544,-0.945607,-0.949528,-0.953306,-0.956940,-0.960431,-0.963776,-0.966976,-0.970031,-0.972940,-0.975702,-0.978317,-0.980785,-0.983105,-0.985278,-0.987301,-0.989177,-0.990903,-0.992480,-0.993907,-0.995185,-0.996313,-0.997290,-0.998118,-0.998795,-0.999322,-0.999699,-0.999925,-1.000000,
        -0.999925,-0.999699,-0.999322,-0.998795,-0.998118,-0.997290,-0.996313,-0.995185,-0.993907,-0.992480,-0.990903,-0.989177,-0.987301,-0.985278,-0.983105,-0.980785,-0.978317,-0.975702,-0.972940,-0.970031,-0.966976,-0.963776,-0.960431,-0.956940,-0.953306,-0.949528,-0.945607,-0.941544,-0.937339,-0.932993,-0.928506,-0.923880,
        -0.919114,-0.914210,-0.909168,-0.903989,-0.898674,-0.893224,-0.887640,-0.881921,-0.876070,-0.870087,-0.863973,-0.857729,-0.851355,-0.844854,-0.838225,-0.831470,-0.824589,-0.817585,-0.810457,-0.803208,-0.795837,-0.788346,-0.780737,-0.773010,-0.765167,-0.757209,-0.749136,-0.740951,-0.732654,-0.724247,-0.715731,-0.707107,
        -0.698376,-0.689541,-0.680601,-0.671559,-0.662416,-0.653173,-0.643832,-0.634393,-0.624859,-0.615232,-0.605511,-0.595699,-0.585798,-0.575808,-0.565732,-0.555570,-0.545325,-0.534998,-0.524590,-0.514103,-0.503538,-0.492898,-0.482184,-0.471397,-0.460539,-0.449611,-0.438616,-0.427555,-0.416430,-0.405241,-0.393992,-0.382683,
        -0.371317,-0.359895,-0.348419,-0.336890,-0.325310,-0.313682,-0.302006,-0.290285,-0.278520,-0.266713,-0.254866,-0.242980,-0.231058,-0.219101,-0.207111,-0.195090,-0.183040,-0.170962,-0.158858,-0.146730,-0.134581,-0.122411,-0.110222,-0.098017,-0.085797,-0.073565,-0.061321,-0.049068,-0.036807,-0.024541,-0.012272};

void SetData(float data,unsigned int i)
{
    dataR[i]=data;
    dataI[i]=0;
}

void FFT(unsigned int fft_n)
{
    const int count[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    int i,xx,n;
    int L,j,k,b;
    float TR,TI,temp,Tsin,Tcos;
    long m;
    int x[11]={0};

    if((fft_n != 64) && (fft_n != 128) && (fft_n != 256) && (fft_n != 512))
    {
        printf("fft point error,point = %d!\r\n",fft_n);
        while(1);
    }

    switch(fft_n)
    {
        case 64:
            n = 6;
			break;
        case 128:
            n = 7;
			break;
        case 256:
            n = 8;
			break;
        default: /*512*/
            n = 9;
			break;
    }
/********** following code invert sequence ************/
    for(i=0;i<count[n];i++)
    {
        xx=0;
        for(j=0;j<n;j++) {x[j]=0;}
        for(j=0;j<n;j++) {x[j]=(i/count[j])&0x01;}
        for(j=0;j<n;j++) {xx=xx+x[j]*count[n-j-1];}
        dataI[xx]=dataR[i];
    }
    for(i=0;i<count[n];i++)
    {
        dataR[i]=dataI[i];
        dataI[i]=0;
    }
/************** following code FFT *******************/
    for(L=1;L<=n;L++)
    {
        b=1;
        b<<=(L-1);

        m=fft_n/count[L];

        for(j=0;j<=b-1;j++)
        {
            if(fft_n == 64)
            {
                Tsin=sin_tab_64[(m*j)%fft_n];
                Tcos=sin_tab_64[(m*j+fft_n/4)%fft_n];
            }
            else if(fft_n == 128)
            {
                Tsin=sin_tab_128[(m*j)%fft_n];
                Tcos=sin_tab_128[(m*j+fft_n/4)%fft_n];
            }
            else if(fft_n == 256)
            {
                Tsin=sin_tab_256[(m*j)%fft_n];
                Tcos=sin_tab_256[(m*j+fft_n/4)%fft_n];
            }
            else /*512*/
            {
                Tsin=sin_tab_512[(m*j)%fft_n];
                Tcos=sin_tab_512[(m*j+fft_n/4)%fft_n];
            }

            for(k=j;k<count[n];k=k+2*b) /* for (3) */
            {
                TR=dataR[k];
                TI=dataI[k];
                temp=dataR[k+b];
                dataR[k] = dataR[k]+dataR[k+b]*Tcos+dataI[k+b]*Tsin;
                dataI[k] = dataI[k]-dataR[k+b]*Tsin+dataI[k+b]*Tcos;
                dataR[k+b] = TR-dataR[k+b]*Tcos-dataI[k+b]*Tsin;
                dataI[k+b] = TI+temp*Tsin-dataI[k+b]*Tcos;
            }
        }
    } 
}

float GetPow(unsigned int k)
{
    return (dataR[k]*dataR[k]+dataI[k]*dataI[k])*0.001953125;
}

void soft_calc_fft(unsigned int fft_n,float *input, float *power)
{
    if((fft_n != 64) && (fft_n != 128) && (fft_n != 256) && (fft_n != 512))
    {
        printf("fft point error,point = %d!\r\n",fft_n);
        while(1);
    }

    for(int i = 0; i < fft_n;i++)
        SetData(input[i], i);

    FFT(fft_n);
    for(int i = 0; i < fft_n; i++)
    {
        power[i] = GetPow(i);
    }
}

void soft_calc_fft_ri(unsigned int fft_n,float *input, float *real, float *image)
{
    if((fft_n != 64) && (fft_n != 128) && (fft_n != 256) && (fft_n != 512))
    {
        printf("fft point error,point = %d!\r\n",fft_n);
        while(1);
    }

    for(int i = 0; i < fft_n;i++)
    {
        SetData(input[i], i);
    }
    FFT(fft_n);
    for(int i = 0; i < fft_n;i ++)
    {
        real[i] = dataR[i];
        image[i] = dataI[i];
    }
}