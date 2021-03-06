//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SchoolTime/SCLSuppressSchoolModeAssertionXPCServer-Protocol.h>

@class NSString, NSXPCConnection;
@protocol SCLSuppressSchoolModeAssertionClientDelegate;

@interface SCLSuppressSchoolModeAssertionClient : NSObject <SCLSuppressSchoolModeAssertionXPCServer>
{
    BOOL _acquired;
    BOOL _entitled;
    id<SCLSuppressSchoolModeAssertionClientDelegate> _delegate;
    NSXPCConnection *_connection;
    NSString *_explanation;
}

@property (nonatomic, getter=isAcquired) BOOL acquired; // @synthesize acquired=_acquired;
@property (readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SCLSuppressSchoolModeAssertionClientDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEntitled) BOOL entitled; // @synthesize entitled=_entitled;
@property (readonly, copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)acquireWithExplanation:(id)arg1 UUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connectionDidInvalidate;
- (id)initWithConnection:(id)arg1;

@end

