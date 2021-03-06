//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import <DAEAS/ASParsingAcceptingTopLevelLeaves-Protocol.h>
#import <DAEAS/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableDictionary, NSString;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves, NSSecureCoding>
{
    int _status;
    int _role;
    int _localId;
    NSString *_name;
    NSString *_email;
    NSDate *_proposedStartTime;
    NSDate *_proposedEndTime;
    NSString *_invitedBy;
    NSMutableDictionary *_placeHolder;
}

@property (strong, nonatomic) NSString *email; // @synthesize email=_email;
@property (strong, nonatomic) NSString *invitedBy; // @synthesize invitedBy=_invitedBy;
@property (nonatomic) int localId; // @synthesize localId=_localId;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSMutableDictionary *placeHolder; // @synthesize placeHolder=_placeHolder;
@property (strong, nonatomic) NSDate *proposedEndTime; // @synthesize proposedEndTime=_proposedEndTime;
@property (strong, nonatomic) NSDate *proposedStartTime; // @synthesize proposedStartTime=_proposedStartTime;
@property (nonatomic) int role; // @synthesize role=_role;
@property (nonatomic) int status; // @synthesize status=_status;

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2;
- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (id)copyOfSelfWithoutLocalID;
- (void)encodeWithCoder:(id)arg1;
- (id)fullEmailString;
- (id)icsUserAddress;
- (id)init;
- (id)initWithCalAttendee:(void *)arg1 parentEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void *)arg2 isDefaultCalendar:(BOOL)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL *)arg5;
- (void)setObject:(id)arg1 forDCCPT:(int)arg2;

@end

