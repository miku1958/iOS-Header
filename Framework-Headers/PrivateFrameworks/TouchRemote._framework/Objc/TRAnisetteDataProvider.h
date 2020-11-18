//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/AKAnisetteServiceProtocol-Protocol.h>
#import <TouchRemote/NSCopying-Protocol.h>

@class TRSession;

@interface TRAnisetteDataProvider : NSObject <AKAnisetteServiceProtocol, NSCopying>
{
    TRSession *_session;
}

@property (strong, nonatomic) TRSession *session; // @synthesize session=_session;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithSession:(id)arg1;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
