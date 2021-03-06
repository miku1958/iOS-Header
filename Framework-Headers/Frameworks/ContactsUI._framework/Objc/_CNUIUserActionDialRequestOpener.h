//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionDialRequestOpener-Protocol.h>

@class NSString, TUCallCenter;

@interface _CNUIUserActionDialRequestOpener : NSObject <CNUIUserActionDialRequestOpener>
{
    TUCallCenter *_callCenter;
}

@property (readonly, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)errorForUnableToCastDialRequest:(id)arg1;
+ (id)errorForUnableToOpenDialRequest:(id)arg1 withUnderlyingError:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCallCenter:(id)arg1;
- (id)openDialRequest:(id)arg1 withScheduler:(id)arg2;

@end

