//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSCEQuotedRefPathWord : NSObject
{
    BOOL _wasQuoted;
    BOOL _hasPreserveFlag;
    NSString *_rawString;
}

@property (nonatomic) BOOL hasPreserveFlag; // @synthesize hasPreserveFlag=_hasPreserveFlag;
@property (strong, nonatomic) NSString *rawString; // @synthesize rawString=_rawString;
@property (nonatomic) BOOL wasQuoted; // @synthesize wasQuoted=_wasQuoted;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRawString:(id)arg1;
- (id)quoteStringIfNeeded;
- (id)trimmedString;
- (id)trimmedStringWithPreserveFlag:(BOOL)arg1;

@end

