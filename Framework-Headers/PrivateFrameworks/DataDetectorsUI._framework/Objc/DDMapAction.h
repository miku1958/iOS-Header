//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDRemoteAction.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DDMapAction : DDRemoteAction
{
    NSURL *_commitURL;
    NSString *_addressString;
}

+ (BOOL)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;
+ (id)viewControllerProviderClass;
- (void).cxx_destruct;
- (id)commitURL;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)platterTitle;
- (id)previewActions;

@end
