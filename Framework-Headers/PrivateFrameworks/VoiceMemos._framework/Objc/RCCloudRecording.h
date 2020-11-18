//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <VoiceMemos/RCMutableRecording-Protocol.h>

@class AVAsset, CLLocation, NSDate, NSString, NSURL;
@protocol _NSFileBackedFuture;

@interface RCCloudRecording : NSManagedObject <RCMutableRecording>
{
    AVAsset *_avAsset;
}

@property (readonly, copy, nonatomic) NSURL *URIRepresentation;
@property (strong, nonatomic) id<_NSFileBackedFuture> audioFuture; // @dynamic audioFuture;
@property (readonly, nonatomic) AVAsset *avAsset;
@property (copy, nonatomic) NSString *customLabel; // @dynamic customLabel;
@property (copy, nonatomic) NSDate *date; // @dynamic date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration; // @dynamic duration;
@property (readonly, nonatomic) BOOL editing;
@property (nonatomic) BOOL evicted;
@property (copy, nonatomic) NSDate *evictionDate; // @dynamic evictionDate;
@property (nonatomic) unsigned long long flags; // @dynamic flags;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iTunesPersistentID; // @dynamic iTunesPersistentID;
@property (readonly, nonatomic) BOOL isContentBeingModified;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, nonatomic) BOOL manuallyRenamed;
@property (copy, nonatomic) NSString *path; // @dynamic path;
@property (nonatomic) BOOL pendingRestore;
@property (readonly, nonatomic) BOOL playable;
@property (readonly) Class superclass;
@property (nonatomic) BOOL synced;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
@property (copy, nonatomic) NSString *uniqueID; // @dynamic uniqueID;
@property (readonly, copy, nonatomic) NSURL *url;

+ (id)playablePredicate;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)arg1;
+ (id)searchableItemIdentifierForSavedRecordingURI:(id)arg1;
- (void).cxx_destruct;
- (id)_activityURLCreateIfNecessary:(BOOL)arg1;
- (id)_detailLabel;
- (id)_labelAllowingEmptyString:(BOOL)arg1;
- (void)_validatePath;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (id)name;
- (id)searchableItem;
- (void)setEditing:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setManuallyRenamed:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPlayable:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)synchronizeWithExistingAudioFuture:(id *)arg1;
- (void)willSave;

@end

