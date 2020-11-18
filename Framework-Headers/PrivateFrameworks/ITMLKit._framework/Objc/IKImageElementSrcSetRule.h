//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKStyleMediaQuery, NSString, NSURL;

@interface IKImageElementSrcSetRule : NSObject
{
    NSURL *_imageURL;
    NSString *_descriptor;
    IKStyleMediaQuery *_mediaQuery;
}

@property (strong, nonatomic) NSString *descriptor; // @synthesize descriptor=_descriptor;
@property (strong, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property (strong, nonatomic) IKStyleMediaQuery *mediaQuery; // @synthesize mediaQuery=_mediaQuery;

- (void).cxx_destruct;
- (void)_parseDescriptor:(id)arg1;
- (void)_parseMediaQueryDescriptor:(id)arg1;
- (void)_parseResolutionDescriptor:(id)arg1;
- (id)initWithURL:(id)arg1 descriptor:(id)arg2;

@end

