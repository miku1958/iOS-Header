//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSString;

@interface EDAMManageNoteSharesParameters : FATObject
{
    NSString *_noteGuid;
    NSArray *_membershipsToUpdate;
    NSArray *_invitationsToUpdate;
    NSArray *_membershipsToUnshare;
    NSArray *_invitationsToUnshare;
}

@property (strong, nonatomic) NSArray *invitationsToUnshare; // @synthesize invitationsToUnshare=_invitationsToUnshare;
@property (strong, nonatomic) NSArray *invitationsToUpdate; // @synthesize invitationsToUpdate=_invitationsToUpdate;
@property (strong, nonatomic) NSArray *membershipsToUnshare; // @synthesize membershipsToUnshare=_membershipsToUnshare;
@property (strong, nonatomic) NSArray *membershipsToUpdate; // @synthesize membershipsToUpdate=_membershipsToUpdate;
@property (strong, nonatomic) NSString *noteGuid; // @synthesize noteGuid=_noteGuid;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end

