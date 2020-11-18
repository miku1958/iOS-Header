//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUPickerFilter-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPickerAssetMediaTypeFilter : NSObject <PUPickerFilter>
{
    long long _mediaType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isValidFilter;
@property (readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generatedAssetPredicate;
- (unsigned long long)generatedGenericAssetTypes;
- (unsigned long long)generatedSearchQueryFilterOptions;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaType:(long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end
