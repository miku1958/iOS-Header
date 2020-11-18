//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSSecureCoding-Protocol.h>

@class NSString;

@interface TTFont : NSObject <NSSecureCoding>
{
    unsigned int _fontHints;
    NSString *_fontName;
    double _pointSize;
    id _nativeFont;
}

@property (readonly, nonatomic) unsigned int fontHints; // @synthesize fontHints=_fontHints;
@property (readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property (strong, nonatomic) id nativeFont; // @synthesize nativeFont=_nativeFont;
@property (readonly, nonatomic) double pointSize; // @synthesize pointSize=_pointSize;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct Font *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithName:(id)arg1 size:(double)arg2 hints:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct Font *)arg1;
- (id)serialize;

@end

