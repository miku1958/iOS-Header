//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet;

@interface VSSpeechCharacterSet : NSObject
{
    NSCharacterSet *_characterSet;
}

@property (strong, nonatomic) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;

+ (id)languageMapping;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)arg1;
- (id)unspeakableRangeOfText:(id)arg1;

@end

