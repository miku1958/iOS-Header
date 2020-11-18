//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSUUID, TIDocumentState;

@interface TICandidateRequestToken : NSObject <NSSecureCoding, NSCopying>
{
    int _shiftState;
    NSUUID *_UUID;
    TIDocumentState *_documentState;
}

@property (readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (readonly, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
@property (readonly, nonatomic) int shiftState; // @synthesize shiftState=_shiftState;

+ (BOOL)supportsSecureCoding;
+ (id)tokenForKeyboardState:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initForKeyboardState:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSameRequestAs:(id)arg1;
- (id)shortIdentifier;

@end

