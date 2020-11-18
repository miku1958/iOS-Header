//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSURL;

__attribute__((visibility("hidden")))
@interface _VUIMediaPlayerImageLoaderConfiguration : NSObject
{
    BOOL _screenshot;
    NSNumber *_persistentidentifier;
    NSURL *_sourceURL;
    NSNumber *_storeIdentifier;
    struct CGSize _imageSize;
}

@property (nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property (copy, nonatomic) NSNumber *persistentidentifier; // @synthesize persistentidentifier=_persistentidentifier;
@property (nonatomic, getter=isScreenshot) BOOL screenshot; // @synthesize screenshot=_screenshot;
@property (copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property (copy, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;

- (void).cxx_destruct;
- (void)_populateValuesFromQueryItems;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
