//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXButtonComponentActionProvider-Protocol.h>

@class NSString, SXAction;

@interface SXButtonComponentActionProvider : NSObject <SXButtonComponentActionProvider>
{
    SXAction *_action;
}

@property (readonly, nonatomic) SXAction *action; // @synthesize action=_action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buttonAction;
- (id)initWithAction:(id)arg1;

@end

