//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBFileDataAttachment, _INPBURLValue;

@protocol _INPBSendMessageAttachment <NSObject>

@property (nonatomic) BOOL currentLocation;
@property (strong, nonatomic) _INPBFileDataAttachment *file;
@property (strong, nonatomic) _INPBURLValue *fileURL;
@property (readonly, nonatomic) BOOL hasCurrentLocation;
@property (readonly, nonatomic) BOOL hasFile;
@property (readonly, nonatomic) BOOL hasFileURL;
@property (readonly, nonatomic) BOOL hasSpeechDataURL;
@property (strong, nonatomic) _INPBURLValue *speechDataURL;
@property (readonly, nonatomic) unsigned long long whichDatasource;

@end
