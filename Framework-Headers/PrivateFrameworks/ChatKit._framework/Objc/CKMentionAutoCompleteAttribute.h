//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKMentionEntityNode, NSString;

@interface CKMentionAutoCompleteAttribute : NSObject
{
    CKMentionEntityNode *_mentionEntityNode;
    NSString *_originalText;
    NSString *_displayText;
}

@property (strong, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property (strong, nonatomic) CKMentionEntityNode *mentionEntityNode; // @synthesize mentionEntityNode=_mentionEntityNode;
@property (strong, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;

- (void).cxx_destruct;
- (id)initWithMentionEntityNode:(id)arg1 originalText:(id)arg2 displayText:(id)arg3;

@end

