//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSCopying-Protocol.h>

@class NSData, NSString, UIImage, _XCTImageImplementation;

@interface XCTImage : NSObject <NSCopying>
{
    _XCTImageImplementation *_internalImplementation;
}

@property (readonly, copy) NSData *data;
@property (readonly, copy) UIImage *image;
@property (strong) _XCTImageImplementation *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
@property (copy) NSString *name;
@property (readonly) double scale;

+ (id)UTIForQuality:(long long)arg1;
+ (id)_dataForImage:(id)arg1 quality:(long long)arg2;
+ (double)_scaleForImage:(id)arg1;
+ (double)compressionQualityForQuality:(long long)arg1;
- (void)_ensureImage;
- (id)_init;
- (id)attachment;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataWithQuality:(long long)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithImage:(id)arg1;

@end

