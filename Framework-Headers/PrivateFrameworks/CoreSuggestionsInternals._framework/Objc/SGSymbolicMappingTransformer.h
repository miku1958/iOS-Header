//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSCharacterSet, NSString;

@interface SGSymbolicMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSString *_numericMapping;
    NSString *_characterMapping;
    NSCharacterSet *_characterSet;
}

@property (strong) NSString *characterMapping; // @synthesize characterMapping=_characterMapping;
@property (strong) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSString *numericMapping; // @synthesize numericMapping=_numericMapping;
@property (readonly) Class superclass;

+ (id)withNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2;
- (void).cxx_destruct;
- (id)initWithNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSymbolicMappingTransformer:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end

