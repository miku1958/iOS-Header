//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIDSListener-Protocol.h>
#import <ClassroomKit/IDSAccountDelegate-Protocol.h>

@class IDSAccount, NSString;

@interface CRKConcreteIDSAccountActiveListener : NSObject <IDSAccountDelegate, CRKIDSListener>
{
    IDSAccount *_account;
    CDUnknownBlockType _handler;
}

@property (readonly, nonatomic) IDSAccount *account; // @synthesize account=_account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)listenerWithAccount:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)account:(id)arg1 isActiveChanged:(BOOL)arg2;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)invalidate;

@end

