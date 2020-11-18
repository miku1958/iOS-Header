//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString;

@interface SGNameMappingTransformer : NSObject <PMLTransformerProtocol>
{
    struct _CFBurstTrie *_firstnames;
    struct _CFBurstTrie *_lastnames;
    NSString *_fullNameMapping;
    NSString *_firstNameMapping;
    NSString *_lastNameMapping;
    NSString *_possessiveMapping;
}

@property (strong) NSString *firstNameMapping; // @synthesize firstNameMapping=_firstNameMapping;
@property (strong) NSString *fullNameMapping; // @synthesize fullNameMapping=_fullNameMapping;
@property (strong) NSString *lastNameMapping; // @synthesize lastNameMapping=_lastNameMapping;
@property (strong) NSString *possessiveMapping; // @synthesize possessiveMapping=_possessiveMapping;

+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4;
- (id)transform:(id)arg1;

@end

