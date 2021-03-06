//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@protocol PUPickerFilter;

@interface PHPickerFilter : NSObject <NSCopying>
{
    id<PUPickerFilter> __puPickerFilter;
}

@property (readonly, nonatomic) id<PUPickerFilter> _puPickerFilter; // @synthesize _puPickerFilter=__puPickerFilter;

+ (id)anyFilterMatchingSubfilters:(id)arg1;
+ (id)imagesFilter;
+ (id)livePhotosFilter;
+ (id)videosFilter;
- (void).cxx_destruct;
- (id)_initWithPUPickerFilter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

