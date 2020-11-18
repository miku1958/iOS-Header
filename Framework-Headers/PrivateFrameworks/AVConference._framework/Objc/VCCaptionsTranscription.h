//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/NSCoding-Protocol.h>
#import <AVConference/NSCopying-Protocol.h>
#import <AVConference/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface VCCaptionsTranscription : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    NSMutableArray *_segments;
    NSMutableString *_formattedText;
    unsigned int _utteranceNumber;
    unsigned int _updateNumber;
    BOOL _isLocal;
    BOOL _isFinal;
}

@property (readonly, nonatomic) NSString *formattedText;
@property (nonatomic) BOOL isFinal; // @synthesize isFinal=_isFinal;
@property (nonatomic) BOOL isLocal; // @synthesize isLocal=_isLocal;
@property (readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property (nonatomic) unsigned int updateNumber; // @synthesize updateNumber=_updateNumber;
@property (nonatomic) unsigned int utteranceNumber; // @synthesize utteranceNumber=_utteranceNumber;

+ (BOOL)supportsSecureCoding;
- (void)addSegment:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUtteranceNumber:(unsigned int)arg1 updateNumber:(unsigned int)arg2 isLocal:(BOOL)arg3 isFinal:(BOOL)arg4;

@end
