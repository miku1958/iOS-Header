//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNoteAttributes, NSArray, NSNumber, NSString;

@interface EDAMNoteMetadata : FATObject
{
    NSString *_guid;
    NSString *_title;
    NSNumber *_contentLength;
    NSNumber *_created;
    NSNumber *_updated;
    NSNumber *_deleted;
    NSNumber *_updateSequenceNum;
    NSString *_notebookGuid;
    NSArray *_tagGuids;
    EDAMNoteAttributes *_attributes;
    NSString *_largestResourceMime;
    NSNumber *_largestResourceSize;
}

@property (strong, nonatomic) EDAMNoteAttributes *attributes; // @synthesize attributes=_attributes;
@property (strong, nonatomic) NSNumber *contentLength; // @synthesize contentLength=_contentLength;
@property (strong, nonatomic) NSNumber *created; // @synthesize created=_created;
@property (strong, nonatomic) NSNumber *deleted; // @synthesize deleted=_deleted;
@property (strong, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (strong, nonatomic) NSString *largestResourceMime; // @synthesize largestResourceMime=_largestResourceMime;
@property (strong, nonatomic) NSNumber *largestResourceSize; // @synthesize largestResourceSize=_largestResourceSize;
@property (strong, nonatomic) NSString *notebookGuid; // @synthesize notebookGuid=_notebookGuid;
@property (strong, nonatomic) NSArray *tagGuids; // @synthesize tagGuids=_tagGuids;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;
@property (strong, nonatomic) NSNumber *updated; // @synthesize updated=_updated;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end
