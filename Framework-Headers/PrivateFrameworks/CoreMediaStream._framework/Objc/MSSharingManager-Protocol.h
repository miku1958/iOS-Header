//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class MSShare, NSArray, NSString;
@protocol MSSharingManagerDelegate;

@protocol MSSharingManager <NSObject>

@property (nonatomic) id<MSSharingManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *personID;
@property (strong, nonatomic) NSArray *shares;

- (void)modifyShare:(MSShare *)arg1;
- (void)refreshCurrentShareState;
- (void)removeShare:(MSShare *)arg1;
- (void)respondToInvitation:(MSShare *)arg1 accept:(BOOL)arg2;
- (void)sendInvitationsForShares:(NSArray *)arg1;
@end
