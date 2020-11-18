//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <VoiceMemos/UIActivityItemSource-Protocol.h>

@class AVAsset, CSSearchableItem, NSDate, NSString, NSURL;

@interface RCSavedRecording : NSManagedObject <UIActivityItemSource>
{
    AVAsset *_avAsset;
    NSString *_path;
    BOOL _pathWasInvalid;
    BOOL _ignoreChangeForEntityRevision;
    BOOL _hasPendingChangeAffectingEntityRevision;
}

@property (readonly, copy, nonatomic) NSURL *URIRepresentation;
@property (readonly, nonatomic) AVAsset *avAsset;
@property (copy, nonatomic) NSDate *date; // @dynamic date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasPendingChangeAffectingEntityRevision; // @synthesize hasPendingChangeAffectingEntityRevision=_hasPendingChangeAffectingEntityRevision;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iTunesPersistentID;
@property (readonly, nonatomic) BOOL isContentBeingModified;
@property (copy, nonatomic) NSString *path; // @dynamic path;
@property (nonatomic, getter=isPendingRestore) BOOL pendingRestore; // @dynamic pendingRestore;
@property (nonatomic) long long recordingID;
@property (readonly, copy, nonatomic) CSSearchableItem *searchableItem;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSynced) BOOL synced;
@property (copy, nonatomic) NSString *title; // @dynamic title;
@property (copy, nonatomic) NSString *titleDisallowingEmptyString; // @dynamic titleDisallowingEmptyString;
@property (readonly, copy, nonatomic) NSURL *url;

+ (id)localizedStringForRecordingLabel:(long long)arg1;
+ (id)propertiesAffectingEntityRevision;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)arg1;
+ (id)searchableItemIdentifierForSavedRecordingURI:(id)arg1;
- (void).cxx_destruct;
- (id)_activityURLCreateIfNecessary:(BOOL)arg1;
- (id)_labelAllowingEmptyString:(BOOL)arg1;
- (void)_validatePath;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (id)customLabel;
- (id)detailLabel;
- (id)label;
- (long long)labelPreset;
- (id)name;
- (void)setCustomLabel:(id)arg1;
- (void)setLabelPreset:(long long)arg1;
- (void)setName:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)willSave;

@end
