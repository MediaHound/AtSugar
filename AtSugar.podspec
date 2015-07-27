Pod::Spec.new do |s|
  s.name             = "AtSugar"
  s.version          = "0.1.1"
  s.summary          = "Sugar for your @"
  s.homepage         = "https://github.com/MediaHound/AtSugar"
  s.license          = 'Apache'
  s.author           = { "Dustin Bachrach" => "dustin@mediahound.com" }
  s.source           = { :git => "https://github.com/MediaHound/AtSugar.git", :tag => s.version.to_s }

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'Pod/Classes/**/*'
end
