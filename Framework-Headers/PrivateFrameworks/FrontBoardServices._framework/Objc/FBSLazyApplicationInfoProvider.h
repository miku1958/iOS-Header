//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSApplicationInfoProvider-Protocol.h>

@class NSString;

@interface FBSLazyApplicationInfoProvider : NSObject <FBSApplicationInfoProvider>
{
    Class _applicationInfoSubclass;
}

@property (nonatomic) Class applicationInfoSubclass; // @synthesize applicationInfoSubclass=_applicationInfoSubclass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)applicationInfoForBundleIdentifier:(id)arg1;
- (id)init;

@end
