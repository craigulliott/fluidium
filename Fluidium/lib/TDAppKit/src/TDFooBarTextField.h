//
//  TDFooBarTextField.h
//  TDAppKit
//
//  Created by Todd Ditchendorf on 4/9/10.
//  Copyright 2010 Todd Ditchendorf. All rights reserved.
//

#import <TDAppKit/TDFooBar.h>

@interface TDFooBarTextField : NSTextField {
    TDFooBar *bar;
}

@property (nonatomic, assign) TDFooBar *bar;
@end
