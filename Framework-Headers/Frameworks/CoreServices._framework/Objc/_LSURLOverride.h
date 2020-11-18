//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface _LSURLOverride : NSObject
{
    NSURL *_originalURL;
    NSURL *_overrideURL;
}

@property (readonly, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property (readonly, copy, nonatomic) NSURL *overrideURL; // @synthesize overrideURL=_overrideURL;

+ (void)addOverrideBlock:(CDUnknownBlockType)arg1;
+ (id)bizURL:(State_54569a5c *)arg1;
+ (id)fmfURL:(State_54569a5c *)arg1;
+ (id)fmipURL:(State_54569a5c *)arg1;
+ (id)iCloudEmailPrefsURL:(State_54569a5c *)arg1;
+ (id)iCloudFamilyURL:(State_54569a5c *)arg1;
+ (id)iCloudSchoolworkURL:(State_54569a5c *)arg1;
+ (id)iCloudSharingURL:(State_54569a5c *)arg1;
+ (id)iCloudSharingURL_noFragment:(State_54569a5c *)arg1;
+ (id)iTunesStoreURL:(State_54569a5c *)arg1;
+ (id)keynoteLiveURL:(State_54569a5c *)arg1;
+ (id)keynoteLiveURL_noFragment:(State_54569a5c *)arg1;
+ (id)new;
+ (id)photosURL:(State_54569a5c *)arg1;
+ (void)removeAllOverrideBlocks;
+ (void)resetPlatformFlag;
+ (void)setUseMacOverrides:(BOOL)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithOriginalURL:(id)arg1;
- (id)initWithOriginalURL:(id)arg1 checkingForAvailableApplications:(BOOL)arg2;

@end
