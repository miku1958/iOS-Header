//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/NSObject-Protocol.h>

@class NSArray, NSProgress, NSString, VMVoicemailGreeting;

@protocol VMServerXPCProtocol <NSObject>
- (void)allVoicemails:(void (^)(NSOrderedSet *))arg1;
- (void)changePassword:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)removeAllVoicemails;
- (void)removeVoicemailFromTrashWithIdentifier:(long long)arg1;
- (void)reportTranscriptionProblemForIdentifier:(long long)arg1;
- (void)reportTranscriptionRatedAccurate:(BOOL)arg1 forIdentifier:(long long)arg2;
- (void)requestInitialState:(void (^)(VMVoicemailCapabilities *, NSOrderedSet *, BOOL, BOOL, BOOL, BOOL))arg1;
- (NSProgress *)requestTranscriptionProgress:(void (^)(BOOL))arg1;
- (void)retrieveDataForIdentifier:(long long)arg1;
- (void)retrieveVoicemailGreeting:(void (^)(VMVoicemailGreeting *, NSError *))arg1;
- (void)setDeletedForIdentifier:(long long)arg1;
- (void)setDeletedForIdentifiers:(NSArray *)arg1;
- (void)setReadForIdentifier:(long long)arg1;
- (void)setReadForIdentifiers:(NSArray *)arg1;
- (void)setTrashedForIdentifiers:(NSArray *)arg1;
- (void)setVoicemailGreeting:(VMVoicemailGreeting *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)synchronize;
@end

