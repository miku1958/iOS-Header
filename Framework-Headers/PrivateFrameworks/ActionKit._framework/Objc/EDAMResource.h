//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMData, EDAMResourceAttributes, NSNumber, NSString;

@interface EDAMResource : FATObject
{
    NSString *_guid;
    NSString *_noteGuid;
    EDAMData *_data;
    NSString *_mime;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_duration;
    NSNumber *_active;
    EDAMData *_recognition;
    EDAMResourceAttributes *_attributes;
    NSNumber *_updateSequenceNum;
    EDAMData *_alternateData;
}

@property (strong, nonatomic) NSNumber *active; // @synthesize active=_active;
@property (strong, nonatomic) EDAMData *alternateData; // @synthesize alternateData=_alternateData;
@property (strong, nonatomic) EDAMResourceAttributes *attributes; // @synthesize attributes=_attributes;
@property (strong, nonatomic) EDAMData *data; // @synthesize data=_data;
@property (strong, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property (strong, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (strong, nonatomic) NSNumber *height; // @synthesize height=_height;
@property (strong, nonatomic) NSString *mime; // @synthesize mime=_mime;
@property (strong, nonatomic) NSString *noteGuid; // @synthesize noteGuid=_noteGuid;
@property (strong, nonatomic) EDAMData *recognition; // @synthesize recognition=_recognition;
@property (strong, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;
@property (strong, nonatomic) NSNumber *width; // @synthesize width=_width;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end

