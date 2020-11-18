//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PICompositionExporterMetadataConverter-Protocol.h>

@class NSString;

@interface PLPhotoEditExporterMetadataConverter : NSObject <PICompositionExporterMetadataConverter>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)install;
- (id)photoFeatureFlags:(id)arg1 error:(id *)arg2;
- (id)photoProcessingFlagsFromProperties:(id)arg1 error:(id *)arg2;
- (BOOL)setImageVariation:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (BOOL)setPhotoFeatureFlags:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (BOOL)setPhotoProcessingFlags:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (id)videoMetadataForVariation:(id)arg1 error:(id *)arg2;

@end
