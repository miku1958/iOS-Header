//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShazamKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSTimer;
@protocol SHSyncedLyricsDelegate;

@interface SHSyncedLyrics : NSObject <NSSecureCoding>
{
    id<SHSyncedLyricsDelegate> _delegate;
    NSArray *_lines;
    NSString *_attribution;
    double _preCueDuration;
    NSTimer *_timer;
    NSDate *_lyricsStartDate;
    double _timeWarp;
}

@property (copy, nonatomic) NSString *attribution; // @synthesize attribution=_attribution;
@property (weak, nonatomic) id<SHSyncedLyricsDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property (readonly, nonatomic) NSDate *lyricsStartDate; // @synthesize lyricsStartDate=_lyricsStartDate;
@property (nonatomic) double preCueDuration; // @synthesize preCueDuration=_preCueDuration;
@property (nonatomic) double timeWarp; // @synthesize timeWarp=_timeWarp;
@property (strong, nonatomic) NSTimer *timer; // @synthesize timer=_timer;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)currentLyricLineForOffset:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)fireTimeForLine:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLyricsStartDate:(id)arg1 lines:(id)arg2 attribution:(id)arg3;
- (double)offsetFromStartDate;
- (id)snippetFromOffset:(double)arg1;
- (void)startSyncing;
- (void)stopSyncing;
- (double)timeToLine:(id)arg1 afterDuration:(double)arg2;

@end

