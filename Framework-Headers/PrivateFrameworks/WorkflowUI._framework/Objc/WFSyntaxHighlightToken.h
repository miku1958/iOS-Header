//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFSyntaxHighlightToken-Protocol.h>

@class NSString;

@interface WFSyntaxHighlightToken : NSObject <WFSyntaxHighlightToken>
{
    BOOL _overflows;
    int _start;
    int _length;
    NSString *_string;
}

@property int length; // @synthesize length=_length;
@property BOOL overflows; // @synthesize overflows=_overflows;
@property int start; // @synthesize start=_start;
@property (strong) NSString *string; // @synthesize string=_string;

+ (id)constructToken;
- (void).cxx_destruct;
- (id)description;
- (struct _NSRange)range;

@end
