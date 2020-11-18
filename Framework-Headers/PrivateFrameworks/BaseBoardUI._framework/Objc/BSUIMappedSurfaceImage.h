//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSData;

@interface BSUIMappedSurfaceImage : UIImage
{
    NSData *_mappedSurfaceData;
}

@property (strong, nonatomic, getter=_mappedSurfaceData, setter=_setMappedSurfaceData:) NSData *_mappedSurfaceData; // @synthesize _mappedSurfaceData;

+ (id)mappedSurfaceImageFromPath:(id)arg1 loadEagerly:(BOOL)arg2;
+ (BOOL)writeSurfaceImage:(id)arg1 toFileDescriptor:(int)arg2;
- (void).cxx_destruct;

@end

