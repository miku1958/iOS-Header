//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>
#import <WorkflowKit/WFLoggableObject-Protocol.h>

@class CKRecordID, NSDate, NSDictionary, NSNumber, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowRecord;

@interface WFSharedShortcut : NSObject <WFCloudKitItem, WFLoggableObject>
{
    CKRecordID *_identifier;
    NSString *_name;
    WFWorkflowRecord *_workflowRecord;
    NSDate *_createdAt;
    NSString *_createdBy;
    NSNumber *_iconColor;
    NSNumber *_iconGlyph;
    WFFileRepresentation *_shortcutFile;
    WFFileRepresentation *_iconFile;
}

@property (readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property (readonly, nonatomic) NSString *createdBy; // @synthesize createdBy=_createdBy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) WFWorkflowIcon *icon;
@property (strong, nonatomic) NSNumber *iconColor; // @synthesize iconColor=_iconColor;
@property (strong, nonatomic) WFFileRepresentation *iconFile; // @synthesize iconFile=_iconFile;
@property (strong, nonatomic) NSNumber *iconGlyph; // @synthesize iconGlyph=_iconGlyph;
@property (readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSDictionary *propertiesForEventLogging;
@property (strong, nonatomic) WFFileRepresentation *shortcutFile; // @synthesize shortcutFile=_shortcutFile;
@property (readonly) Class superclass;
@property (strong, nonatomic) WFWorkflowRecord *workflowRecord; // @synthesize workflowRecord=_workflowRecord;

+ (id)properties;
+ (id)recordType;
- (void).cxx_destruct;
- (void)ensureFileAssets;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (id)sharingURL;

@end
