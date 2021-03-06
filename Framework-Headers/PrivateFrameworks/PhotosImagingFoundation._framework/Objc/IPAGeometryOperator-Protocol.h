//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/NSObject-Protocol.h>

@class NSString;
@protocol IPAImageGeometry, IPAImageTransform;

@protocol IPAGeometryOperator <NSObject>
- (NSString *)identifier;
- (id<IPAImageTransform>)transformForGeometry:(id<IPAImageGeometry>)arg1;
@end

