//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface UNSAttachmentRecord : NSObject
{
    BOOL _thumbnailHidden;
    BOOL _hiddenFromDefaultExpandedView;
    NSString *_identifier;
    unsigned long long _family;
    NSURL *_URL;
    NSString *_type;
    NSNumber *_thumbnailFrameNumber;
    CDStruct_1b6d18a9 _thumbnailTimestamp;
    struct CGRect _thumbnailClippingRect;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (nonatomic) unsigned long long family; // @synthesize family=_family;
@property (nonatomic) BOOL hiddenFromDefaultExpandedView; // @synthesize hiddenFromDefaultExpandedView=_hiddenFromDefaultExpandedView;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) struct CGRect thumbnailClippingRect; // @synthesize thumbnailClippingRect=_thumbnailClippingRect;
@property (copy, nonatomic) NSNumber *thumbnailFrameNumber; // @synthesize thumbnailFrameNumber=_thumbnailFrameNumber;
@property (nonatomic) BOOL thumbnailHidden; // @synthesize thumbnailHidden=_thumbnailHidden;
@property (nonatomic) CDStruct_1b6d18a9 thumbnailTimestamp; // @synthesize thumbnailTimestamp=_thumbnailTimestamp;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
