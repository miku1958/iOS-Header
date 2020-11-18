//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>

@class NSString, NSURL, SFActionItem;

@interface SFTrack : NSObject <NSSecureCoding>
{
    BOOL _highlighted;
    NSString *_title;
    NSString *_number;
    NSString *_duration;
    NSURL *_preview;
    SFActionItem *_playAction;
}

@property (copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (copy, nonatomic) NSString *number; // @synthesize number=_number;
@property (strong, nonatomic) SFActionItem *playAction; // @synthesize playAction=_playAction;
@property (copy, nonatomic) NSURL *preview; // @synthesize preview=_preview;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
