//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface ADContentProxyAttributes : NSObject
{
    NSURL *_contentProxyURL;
}

@property (copy, nonatomic) NSURL *contentProxyURL; // @synthesize contentProxyURL=_contentProxyURL;

+ (id)sharedInstance;
- (void)contentProxyURLDidChange:(id)arg1;
- (void)dealloc;

@end

