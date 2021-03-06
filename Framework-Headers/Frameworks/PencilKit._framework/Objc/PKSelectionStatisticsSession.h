//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSString;

@interface PKSelectionStatisticsSession : NSObject
{
    NSMutableArray *_selectionGestures;
    NSMutableArray *_selectionActions;
    NSDate *_startTime;
    double _timeSpentSelecting;
    long long _numberOfTimesSelectionWasClearedInASession;
    long long _selectionGestureCount;
    NSString *_lastActionTaken;
    NSString *_lastSignificantActionTaken;
    long long _lastSelectionType;
    long long _lastContentType;
}

@property (strong, nonatomic) NSString *lastActionTaken; // @synthesize lastActionTaken=_lastActionTaken;
@property (nonatomic) long long lastContentType; // @synthesize lastContentType=_lastContentType;
@property (nonatomic) long long lastSelectionType; // @synthesize lastSelectionType=_lastSelectionType;
@property (strong, nonatomic) NSString *lastSignificantActionTaken; // @synthesize lastSignificantActionTaken=_lastSignificantActionTaken;
@property (nonatomic) long long numberOfTimesSelectionWasClearedInASession; // @synthesize numberOfTimesSelectionWasClearedInASession=_numberOfTimesSelectionWasClearedInASession;
@property (readonly, nonatomic) NSDictionary *selectionActionDictionary;
@property (nonatomic) long long selectionGestureCount; // @synthesize selectionGestureCount=_selectionGestureCount;
@property (readonly, nonatomic) NSDictionary *selectionGestureDictionary;
@property (nonatomic) double timeSpentSelecting; // @synthesize timeSpentSelecting=_timeSpentSelecting;

- (void).cxx_destruct;
- (id)init;
- (void)logGesture:(long long)arg1 selectionType:(long long)arg2 contentType:(long long)arg3;
- (void)logSelectionAction:(long long)arg1;

@end

