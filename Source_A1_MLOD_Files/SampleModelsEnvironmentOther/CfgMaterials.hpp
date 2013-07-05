class CfgMaterials
{
  // Water material is used for sea landscape parts
  class Water
  {
    class Stage1
    {
      // normal map - can be in DXT1/DXT5, 2- or 3- component compression
      texture="ca\data\data\water_nofhq.paa";
      uvSource="texWaterAnim";
      class uvTransform
      {
        aside[] = {0,1,0};
        up[]    = {1,0,0};
        dir[]   = {0,0,1};
        pos[]   = {0.3,0.4,0};
      };
    };
    class Stage2
    {
      // foam map - used for wave tops near the shore
      // blurred grayscale noise seems to works quite well
      texture="CA\data\data\sea_foam_lco.paa";
      uvSource="none";
    };
    class Stage3
    {
      texture="#(ai,16,64,1)waterirradiance(16)";
      uvSource="none";
    };
  };

  // Shore material is used for interface geometry between sea and terrain
  class Shore
  {
    class Stage1
    {
      // normal map - can be in DXT1/DXT5, 2- or 3- component compression
      texture="ca\data\data\water_nofhq.paa";
      uvSource="texWaterAnim";
      class uvTransform
      {
        aside[] = {0,1,0};
        up[]    = {1,0,0};
        dir[]   = {0,0,1};
        pos[]   = {0.3,0.4,0};
      };
    };
    class Stage2
    {
      // foam map - used for wave tops near the shore
      // blurred grayscale noise seems to works quite well
      texture="CA\data\data\sea_foam_lco.paa";
      uvSource="none";
    };
    class Stage3
    {
      texture="#(ai,16,64,1)waterirradiance(16)";
      uvSource="none";
    };
  };

  // Shore material is used for interface geometry between sea and terrain - the foam part
  class ShoreFoam
  {
    class Stage1
    {
      // normal map - can be in DXT1/DXT5, 2- or 3- component compression
      texture="ca\data\data\water_nofhq.paa";
      uvSource="texWaterAnim";
      class uvTransform
      {
        aside[] = {0,1,0};
        up[]    = {1,0,0};
        dir[]   = {0,0,1};
        pos[]   = {0.3,0.4,0};
      };
    };
    class Stage2
    {
      // foam map - used for wave tops near the shore
      // blurred grayscale noise seems to works quite well
      texture="CA\data\data\sea_foam_lco.paa";
      uvSource="none";
    };
    class Stage3
    {
      texture="#(ai,16,64,1)waterirradiance(16)";
      uvSource="none";
    };
  };
};