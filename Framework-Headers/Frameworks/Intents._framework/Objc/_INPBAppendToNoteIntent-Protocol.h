//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBIntentMetadata, _INPBNote, _INPBNoteContent;

@protocol _INPBAppendToNoteIntent <NSObject>

@property (strong, nonatomic) _INPBNoteContent *content;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasTargetNote;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (strong, nonatomic) _INPBNote *targetNote;

@end
