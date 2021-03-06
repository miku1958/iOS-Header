//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationToken : NSObject <NSSecureCoding>
{
    BOOL _removeSpaceBefore;
    BOOL _removeSpaceAfter;
    NSString *_text;
}

@property (readonly, nonatomic) BOOL removeSpaceAfter; // @synthesize removeSpaceAfter=_removeSpaceAfter;
@property (nonatomic) BOOL removeSpaceBefore; // @synthesize removeSpaceBefore=_removeSpaceBefore;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionExtra;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 removeSpaceBefore:(BOOL)arg2 removeSpaceAfter:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;

@end

