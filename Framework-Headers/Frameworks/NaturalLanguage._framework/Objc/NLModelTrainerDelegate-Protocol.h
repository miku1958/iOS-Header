//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NaturalLanguage/NSObject-Protocol.h>

@class NLModelTrainer, NSString;

@protocol NLModelTrainerDelegate <NSObject>

@optional
- (void)modelTrainer:(NLModelTrainer *)arg1 logMessage:(NSString *)arg2;
- (BOOL)modelTrainerShouldStop:(NLModelTrainer *)arg1;
@end

