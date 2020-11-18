//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFAudio/NSSecureCoding-Protocol.h>

@interface AVAudioChannelLayout : NSObject <NSSecureCoding>
{
    unsigned int _layoutTag;
    struct AudioChannelLayout *_layout;
    void *_reserved;
}

@property (readonly, nonatomic) unsigned int channelCount;
@property (readonly, nonatomic) const struct AudioChannelLayout *layout;
@property (readonly, nonatomic) unsigned int layoutTag;

+ (id)layoutWithLayout:(const struct AudioChannelLayout *)arg1;
+ (id)layoutWithLayoutTag:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayout:(const struct AudioChannelLayout *)arg1;
- (id)initWithLayoutTag:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)layoutSize;

@end

