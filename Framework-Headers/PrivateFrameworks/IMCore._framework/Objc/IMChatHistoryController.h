//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject
{
    NSMutableDictionary *_runningQueries;
}

@property (strong) NSMutableDictionary *_runningQueries; // @synthesize _runningQueries;

+ (id)sharedInstance;
- (void)databaseFull;
- (void)databaseNoLongerFull;
- (void)dealloc;
- (id)init;
- (void)loadMessageWithGUID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3;

@end

