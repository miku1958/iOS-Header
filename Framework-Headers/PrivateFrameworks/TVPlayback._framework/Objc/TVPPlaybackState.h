//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVPPlaybackState : NSObject
{
    NSString *_name;
}

@property (strong, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)loading;
+ (id)paused;
+ (id)playing;
+ (id)scanning;
+ (id)stopped;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

