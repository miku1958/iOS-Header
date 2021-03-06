//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSString;
@protocol SAClientBoundCommand;

@interface SAARParaphrasedAlternativeResult : SAAceView
{
}

@property (strong, nonatomic) id<SAClientBoundCommand> command;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *paraphrasedIntent;

+ (id)paraphrasedAlternativeResult;
+ (id)paraphrasedAlternativeResultWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

