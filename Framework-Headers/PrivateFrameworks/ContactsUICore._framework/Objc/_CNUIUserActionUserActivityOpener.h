//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionUserActivityOpener-Protocol.h>

@class LSApplicationWorkspace, NSString;

@interface _CNUIUserActionUserActivityOpener : NSObject <CNUIUserActionUserActivityOpener>
{
    LSApplicationWorkspace *_applicationWorkspace;
}

@property (readonly, nonatomic) LSApplicationWorkspace *applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)errorForUnableToOpenUserActivity:(id)arg1 withUnderlyingError:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithApplicationWorkspace:(id)arg1;
- (id)openUserActivity:(id)arg1 usingBundleIdentifier:(id)arg2 withScheduler:(id)arg3;

@end
