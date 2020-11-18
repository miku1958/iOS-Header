//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSString;

@interface EDAMManageNotebookSharesParameters : FATObject
{
    NSString *_notebookGuid;
    NSString *_inviteMessage;
    NSArray *_membershipsToUpdate;
    NSArray *_invitationsToCreateOrUpdate;
    NSArray *_unshares;
}

@property (strong, nonatomic) NSArray *invitationsToCreateOrUpdate; // @synthesize invitationsToCreateOrUpdate=_invitationsToCreateOrUpdate;
@property (strong, nonatomic) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property (strong, nonatomic) NSArray *membershipsToUpdate; // @synthesize membershipsToUpdate=_membershipsToUpdate;
@property (strong, nonatomic) NSString *notebookGuid; // @synthesize notebookGuid=_notebookGuid;
@property (strong, nonatomic) NSArray *unshares; // @synthesize unshares=_unshares;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end
