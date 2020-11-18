//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface MSASComment : NSObject <NSSecureCoding>
{
    BOOL _isLike;
    BOOL _isCaption;
    BOOL _isBatchComment;
    BOOL _isDeletable;
    BOOL _isMine;
    int _ID;
    NSString *_GUID;
    NSDate *_timestamp;
    NSDate *_clientTimestamp;
    NSString *_personID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_email;
    NSString *_content;
}

@property (strong, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property (nonatomic) int ID; // @synthesize ID=_ID;
@property (strong, nonatomic) NSDate *clientTimestamp; // @synthesize clientTimestamp=_clientTimestamp;
@property (strong, nonatomic) NSString *content; // @synthesize content=_content;
@property (strong, nonatomic) NSString *email; // @synthesize email=_email;
@property (strong, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (strong, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property (nonatomic) BOOL isBatchComment; // @synthesize isBatchComment=_isBatchComment;
@property (nonatomic) BOOL isCaption; // @synthesize isCaption=_isCaption;
@property (nonatomic) BOOL isDeletable; // @synthesize isDeletable=_isDeletable;
@property (nonatomic) BOOL isLike; // @synthesize isLike=_isLike;
@property (nonatomic) BOOL isMine; // @synthesize isMine=_isMine;
@property (strong, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (strong, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property (strong, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

+ (id)MSASPCommentFromProtocolDictionary:(id)arg1;
+ (id)comment;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
